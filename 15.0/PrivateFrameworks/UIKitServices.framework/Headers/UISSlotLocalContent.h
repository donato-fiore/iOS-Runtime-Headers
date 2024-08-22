// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISSLOTLOCALCONTENT_H
#define UISSLOTLOCALCONTENT_H

@class NSString;
@protocol UISSlotAnyContent;

#import <Foundation/Foundation.h>


@interface UISSlotLocalContent : NSObject <UISSlotAnyContent>

 {
    unsigned char _contentScale;
    CGSize _contentSize;
    *CGImage _localImage;
}


@property (readonly, nonatomic) unsigned char contentScale;
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) BOOL shouldReplaceExistingContent;
@property (readonly) Class superclass;


+(id)contentWithDrawing:(id)arg0 scale:(unsigned char)arg1 range:(NSUInteger)arg2 ;
-(id)image;
-(id)initWithContentSize:(struct CGSize )arg0 contentScale:(unsigned char)arg1 localImage:(struct CGImage *)arg2 ;
-(void)dealloc;
-(void)deleteFromLayerContext:(id)arg0 ;


@end


#endif