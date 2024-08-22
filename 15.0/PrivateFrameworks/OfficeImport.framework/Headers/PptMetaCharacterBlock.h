// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTMETACHARACTERBLOCK_H
#define PPTMETACHARACTERBLOCK_H


#import <Foundation/Foundation.h>


@interface PptMetaCharacterBlock : NSObject {
    int mType;
    int mPosition;
    int mExtraData;
}




-(id)initWithType:(int)arg0 position:(int)arg1 ;
-(id)initWithType:(int)arg0 position:(int)arg1 extraData:(int)arg2 ;
-(int)extraData;
-(int)position;
-(int)type;
-(void)setPosition:(int)arg0 ;


@end


#endif