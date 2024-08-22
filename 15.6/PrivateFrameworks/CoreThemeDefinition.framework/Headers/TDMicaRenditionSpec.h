// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDMICARENDITIONSPEC_H
#define TDMICARENDITIONSPEC_H

@class NSString;


#import "TDRenditionSpec.h"

@interface TDMicaRenditionSpec : TDRenditionSpec

@property (nonatomic) BOOL isTintable;
@property (copy, nonatomic) NSString *layerPath;


-(id)copyDataFromAttributes;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(id)debugDescription;
-(void)_logError:(id)arg0 ;
-(void)_logExtra:(id)arg0 ;
-(void)_logWarning:(id)arg0 ;
-(void)copyAttributesInto:(id)arg0 ;
-(void)setAttributesFromCopyData:(id)arg0 ;


@end


#endif