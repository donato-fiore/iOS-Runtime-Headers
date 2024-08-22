// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEOBJECTPROPERTY_H
#define DEOBJECTPROPERTY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface DEObjectProperty : NSObject

@property *void This; // ivar: _This
@property shared_ptr<siri::dialogengine::ObjectProperty> ThisShared; // ivar: _ThisShared
@property (readonly) NSString *description;
@property (readonly) NSString *name;
@property (readonly) NSArray *sampleValueLocales;
@property (readonly) NSString *semanticConcept;
@property (readonly) NSString *type;


-(id)init;
-(id)initWithPtr:(*void)arg0 ;
-(id)initWithSharedPtr:(*void)arg0 ;
-(id)sampleValuesForLocale:(id)arg0 ;


@end


#endif