// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFHIREXTENSIONPROCESSOR_H
#define HDFHIREXTENSIONPROCESSOR_H

@class NSArray, NSMutableArray, NSString, HDFHIRResourceObject;
@protocol HKJSONVisitorDelegate;

#import <Foundation/Foundation.h>


@interface HDFHIRExtensionProcessor : NSObject <HKJSONVisitorDelegate>



@property (retain, nonatomic) NSArray *collectedUnsupportedModifierExtensions; // ivar: _collectedUnsupportedModifierExtensions
@property (retain, nonatomic) NSMutableArray *collectingUnsupportedModifierExtensions; // ivar: _collectingUnsupportedModifierExtensions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HDFHIRResourceObject *resource; // ivar: _resource
@property (readonly) Class superclass;


+(BOOL)isSupportedModifierExtension:(id)arg0 ;
+(id)extensionsForURL:(id)arg0 inJSONDictionary:(id)arg1 error:(*id)arg2 ;
-(NSInteger)visitor:(id)arg0 willVisitArray:(id)arg1 ;
-(id)findUnsupportedModifierExtensions:(*id)arg0 ;
-(id)init;
-(id)initWithResource:(id)arg0 ;


@end


#endif