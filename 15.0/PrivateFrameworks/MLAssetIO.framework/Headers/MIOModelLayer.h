// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIOMODELLAYER_H
#define MIOMODELLAYER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface MIOModelLayer : NSObject {
    NSDictionary *_layerHistogram;
}


@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithMessageStream:(struct CodedInputStream *)arg0 error:(*id)arg1 ;
-(id)initWithName:(id)arg0 type:(id)arg1 ;
-(id)initWithName:(id)arg0 type:(id)arg1 histogram:(id)arg2 ;
-(id)layerHistogram;


@end


#endif