// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PHVARIATIONINMEMORYCACHEDVALUE_H
#define _PHVARIATIONINMEMORYCACHEDVALUE_H

@class NSDate, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface _PHVariationInMemoryCachedValue : NSObject

@property (readonly, nonatomic) NSDate *expectedDate; // ivar: _expectedDate
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) NSDictionary *info; // ivar: _info
@property (readonly, nonatomic) BOOL isValid;


-(id)_currentFileModificationDate;
-(id)initWithInfo:(id)arg0 fileURL:(id)arg1 ;


@end


#endif