// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISSLOTREMOTECONTENT_H
#define UISSLOTREMOTECONTENT_H

@class NSString;
@protocol NSSecureCoding, UISSlotAnyContent;

#import <Foundation/Foundation.h>


@interface UISSlotRemoteContent : NSObject <NSSecureCoding, UISSlotAnyContent>

 {
    unsigned char _contentScale;
    CGSize _contentSize;
}


@property (readonly, nonatomic) unsigned char contentScale;
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) BOOL shouldReplaceExistingContent;
@property (readonly, nonatomic) unsigned int slotID; // ivar: _slotID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newLayerContext;
-(BOOL)isEqual:(id)arg0 ;
-(id)image;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentSize:(struct CGSize )arg0 contentScale:(unsigned char)arg1 localImage:(struct CGImage *)arg2 toLayerContext:(*id)arg3 ;
-(id)newTouchAuthenticationSpecificationWithAuthenticationMessageContext:(NSUInteger)arg0 hitTestInformationMask:(NSUInteger)arg1 ;
-(void)deleteFromLayerContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)transferFromLayerContext:(id)arg0 toLayerContextWithId:(NSUInteger)arg1 ;


@end


#endif