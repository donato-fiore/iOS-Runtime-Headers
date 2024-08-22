// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WGWIDGETDATUM_H
#define WGWIDGETDATUM_H

@class NSString, NSExtension;
@protocol WGDatum;

#import <Foundation/Foundation.h>


@interface WGWidgetDatum : NSObject <WGDatum>



@property (readonly, copy, nonatomic) NSString *datumIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSExtension *representedExtension; // ivar: _representedExtension
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithExtension:(id)arg0 ;


@end


#endif