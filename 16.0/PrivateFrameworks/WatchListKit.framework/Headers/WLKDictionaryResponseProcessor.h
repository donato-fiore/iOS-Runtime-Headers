// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKDICTIONARYRESPONSEPROCESSOR_H
#define WLKDICTIONARYRESPONSEPROCESSOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLKDictionaryResponseProcessor : NSObject

@property (copy, nonatomic) NSString *dictionaryKeyPath; // ivar: _dictionaryKeyPath
@property (retain, nonatomic) Class objectClass; // ivar: _objectClass


-(id)processResponseData:(id)arg0 error:(*id)arg1 ;
-(id)processResponseData:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif