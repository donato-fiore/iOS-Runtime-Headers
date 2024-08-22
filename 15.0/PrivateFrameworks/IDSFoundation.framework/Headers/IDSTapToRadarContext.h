// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSTAPTORADARCONTEXT_H
#define IDSTAPTORADARCONTEXT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface IDSTapToRadarContext : NSObject {
    NSDictionary *_rawContext;
}




-(BOOL)_isValidClassification:(id)arg0 ;
-(BOOL)_isValidReproducibility:(id)arg0 ;
-(id)getTapToRadarURL;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTitle:(id)arg0 problemDescription:(id)arg1 ;


@end


#endif