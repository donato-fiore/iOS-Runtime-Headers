// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLJSONSCHEMA_H
#define TMLJSONSCHEMA_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TMLJSONSchema : NSObject {
    NSDictionary *_schema;
}




-(id)init;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)propertyForKeyPath:(id)arg0 ;


@end


#endif