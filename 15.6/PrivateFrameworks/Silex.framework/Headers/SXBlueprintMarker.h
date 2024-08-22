// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXBLUEPRINTMARKER_H
#define SXBLUEPRINTMARKER_H

@class NSString, NSArray;
@protocol SXBlueprintMarker, SXComponentAnchor, SXComponent;

#import <Foundation/Foundation.h>


@interface SXBlueprintMarker : NSObject <SXBlueprintMarker>



@property (readonly, nonatomic) CGPoint approximateLocation; // ivar: _approximateLocation
@property (retain, nonatomic) NSObject<SXComponentAnchor> *componentAnchor; // ivar: _componentAnchor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXComponent> *leadingComponent; // ivar: _leadingComponent
@property (readonly, nonatomic) NSArray *path; // ivar: _path
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXComponent> *trailingComponent; // ivar: _trailingComponent


-(BOOL)isEqualToMarker:(id)arg0 ;
-(id)initWithLeadingComponent:(id)arg0 trailingComponent:(id)arg1 approximateLocation:(struct CGPoint )arg2 path:(id)arg3 ;


@end


#endif