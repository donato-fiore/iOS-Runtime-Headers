// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICFPCONTENTINFO_H
#define ICFPCONTENTINFO_H


#import <Foundation/Foundation.h>


@interface ICFPContentInfo : NSObject

@property (readonly, nonatomic) NSUInteger accountID; // ivar: _accountID
@property (readonly, nonatomic) unsigned char fpContentInfo;
@property (readonly, nonatomic) NSInteger vodkaType; // ivar: _vodkaType


+(id)whaContentInfoWithAccountID:(NSUInteger)arg0 ;
-(id)_init;


@end


#endif