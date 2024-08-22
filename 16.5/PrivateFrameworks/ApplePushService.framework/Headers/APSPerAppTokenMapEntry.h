// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSPERAPPTOKENMAPENTRY_H
#define APSPERAPPTOKENMAPENTRY_H

@class NSData;
@protocol APSTokenInfo;

#import <Foundation/Foundation.h>


@interface APSPerAppTokenMapEntry : NSObject

@property (nonatomic) BOOL flag; // ivar: _flag
@property (retain, nonatomic) NSObject<APSTokenInfo> *info; // ivar: _info
@property (retain, nonatomic) NSData *perAppToken; // ivar: _perAppToken


-(id)description;


@end


#endif