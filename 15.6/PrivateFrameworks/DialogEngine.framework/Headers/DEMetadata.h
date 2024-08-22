// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEMETADATA_H
#define DEMETADATA_H


#import <Foundation/Foundation.h>


@interface DEMetadata : NSObject {
    optional<siri::dialogengine::ObjectInput> _Obj;
}


@property ? Obj;


+(id)schemaInput:(id)arg0 typeName:(id)arg1 inputName:(id)arg2 ;
-(id)initWithOpt:(*void)arg0 ;
-(id)sampleValues:(id)arg0 ;
-(id)sampleValues:(id)arg0 locale:(id)arg1 ;


@end


#endif