// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDEMPTYSLOTCONTENT_H
#define SLDEMPTYSLOTCONTENT_H

@class NSString, UISSlotStyle;
@protocol UISSlotAnyContent;

#import <Foundation/Foundation.h>


@interface SLDEmptySlotContent : NSObject <UISSlotAnyContent>



@property (readonly, nonatomic) unsigned char contentScale;
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRemote; // ivar: _isRemote
@property (readonly, nonatomic) BOOL shouldReplaceExistingContent;
@property (retain, nonatomic) UISSlotStyle *style; // ivar: _style
@property (readonly) Class superclass;


-(id)image;
-(id)initWithStyle:(id)arg0 forRemote:(BOOL)arg1 ;
-(void)deleteFromLayerContext:(id)arg0 ;


@end


#endif