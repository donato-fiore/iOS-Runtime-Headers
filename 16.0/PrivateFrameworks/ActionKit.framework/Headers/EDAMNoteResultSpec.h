// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMNOTERESULTSPEC_H
#define EDAMNOTERESULTSPEC_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMNoteResultSpec : FATObject

@property (retain, nonatomic) NSNumber *includeAccountLimits; // ivar: _includeAccountLimits
@property (retain, nonatomic) NSNumber *includeContent; // ivar: _includeContent
@property (retain, nonatomic) NSNumber *includeNoteAppDataValues; // ivar: _includeNoteAppDataValues
@property (retain, nonatomic) NSNumber *includeResourceAppDataValues; // ivar: _includeResourceAppDataValues
@property (retain, nonatomic) NSNumber *includeResourcesAlternateData; // ivar: _includeResourcesAlternateData
@property (retain, nonatomic) NSNumber *includeResourcesData; // ivar: _includeResourcesData
@property (retain, nonatomic) NSNumber *includeResourcesRecognition; // ivar: _includeResourcesRecognition
@property (retain, nonatomic) NSNumber *includeSharedNotes; // ivar: _includeSharedNotes


+(id)structFields;
+(id)structName;


@end


#endif