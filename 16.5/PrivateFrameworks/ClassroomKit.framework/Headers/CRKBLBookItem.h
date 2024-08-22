// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKBLBOOKITEM_H
#define CRKBLBOOKITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRKBLBookItem : NSObject

@property (copy, nonatomic) NSString *author; // ivar: _author
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *legacyUniqueIdentifier; // ivar: _legacyUniqueIdentifier
@property (copy, nonatomic) NSString *path; // ivar: _path
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type


-(id)description;


@end


#endif