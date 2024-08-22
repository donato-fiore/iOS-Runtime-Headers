// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSSYSTEMPREFERENCERESULTBUILDER_H
#define SSSYSTEMPREFERENCERESULTBUILDER_H

@class NSString;


#import "SSResultBuilder.h"

@interface SSSystemPreferenceResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)initWithResult:(id)arg0 ;


@end


#endif