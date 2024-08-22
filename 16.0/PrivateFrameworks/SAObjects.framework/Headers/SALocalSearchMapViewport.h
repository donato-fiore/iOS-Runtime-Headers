// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHMAPVIEWPORT_H
#define SALOCALSEARCHMAPVIEWPORT_H

@class NSArray;


#import "SADomainObject.h"

@interface SALocalSearchMapViewport : SADomainObject

@property (nonatomic) CGFloat eastLongitude;
@property (nonatomic) CGFloat northLatitude;
@property (nonatomic) CGFloat southLatitude;
@property (nonatomic) CGFloat timeInSecondsSinceViewportChanged;
@property (nonatomic) CGFloat timeInSecondsSinceViewportEnteredForeground;
@property (copy, nonatomic) NSArray *vertices;
@property (nonatomic) CGFloat westLongitude;


+(id)mapViewport;
+(id)mapViewportWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif