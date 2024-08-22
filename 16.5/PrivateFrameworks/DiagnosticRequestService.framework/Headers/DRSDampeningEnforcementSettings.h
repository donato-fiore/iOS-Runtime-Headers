// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSDAMPENINGENFORCEMENTSETTINGS_H
#define DRSDAMPENINGENFORCEMENTSETTINGS_H


#import <Foundation/Foundation.h>


@interface DRSDampeningEnforcementSettings : NSObject

@property (nonatomic) BOOL enforcesResourceCap; // ivar: _enforcesResourceCap
@property (nonatomic) BOOL enforcesResourceDownsampling; // ivar: _enforcesResourceDownsampling
@property (nonatomic) BOOL enforcesResourceHysteresis; // ivar: _enforcesResourceHysteresis
@property (nonatomic) BOOL enforcesSignatureCap; // ivar: _enforcesSignatureCap
@property (nonatomic) BOOL enforcesSignatureDownsampling; // ivar: _enforcesSignatureDownsampling
@property (nonatomic) BOOL enforcesSignatureHysteresis; // ivar: _enforcesSignatureHysteresis
@property (nonatomic) BOOL enforcesTotalCap; // ivar: _enforcesTotalCap


-(BOOL)isEqual:(id)arg0 ;
-(id)_moRepresentation:(id)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithMO:(id)arg0 ;
-(id)jsonCompatibleDictRepresentation;
-(void)setAllEnforcement:(BOOL)arg0 ;


@end


#endif