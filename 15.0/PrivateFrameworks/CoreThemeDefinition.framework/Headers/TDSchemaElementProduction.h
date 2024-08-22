// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDSCHEMAELEMENTPRODUCTION_H
#define TDSCHEMAELEMENTPRODUCTION_H

@class NSString, NSOrderedSet;


#import "TDSimpleArtworkElementProduction.h"

@interface TDSchemaElementProduction : TDSimpleArtworkElementProduction

@property (retain, nonatomic) NSString *folderName;
@property (retain, nonatomic) NSOrderedSet *slices;


-(id)associatedFileURLWithDocument:(id)arg0 ;
-(id)relativePath;
-(void)generateNewRendition;


@end


#endif