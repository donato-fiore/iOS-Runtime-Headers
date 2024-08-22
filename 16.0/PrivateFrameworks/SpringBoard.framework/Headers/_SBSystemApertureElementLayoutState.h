// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBSYSTEMAPERTUREELEMENTLAYOUTSTATE_H
#define _SBSYSTEMAPERTUREELEMENTLAYOUTSTATE_H

@class NSString;
@protocol SAElementIdentifying;

#import <Foundation/Foundation.h>


@interface _SBSystemApertureElementLayoutState : NSObject <SAElementIdentifying>



@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSObject<SAElementIdentifying> *elementIdentification; // ivar: _elementIdentification
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger layoutMode; // ivar: _layoutMode
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithElementIdentification:(id)arg0 layoutMode:(NSInteger)arg1 ;


@end


#endif