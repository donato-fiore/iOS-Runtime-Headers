// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSTTRMETADATA_H
#define BPSTTRMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BPSTTRMetadata : NSObject

@property (nonatomic) NSInteger componentID; // ivar: _componentID
@property (retain, nonatomic) NSString *componentName; // ivar: _componentName
@property (retain, nonatomic) NSString *componentVersion; // ivar: _componentVersion
@property (retain, nonatomic) NSString *radarDescription; // ivar: _radarDescription
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)_parameters;
-(id)init;
-(id)initWithComponent:(NSUInteger)arg0 ;
-(id)initWithComponentName:(id)arg0 componentVersion:(id)arg1 componentID:(NSInteger)arg2 ;
-(id)queryItems;
-(void)_setComponentValuesFromComponent:(NSUInteger)arg0 ;


@end


#endif