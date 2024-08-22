// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSMIRESULTREGISTRANTTRUEDATABASECONTEXT_H
#define LSMIRESULTREGISTRANTTRUEDATABASECONTEXT_H

@class NSString;
@protocol LSMIResultRegistrantDatabaseContext;

#import <Foundation/Foundation.h>


@interface LSMIResultRegistrantTrueDatabaseContext : NSObject <LSMIResultRegistrantDatabaseContext>

 {
    LSContext _context;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)fullBundleExistsForIdentifier:(id)arg0 ;
-(id)findContainerizedRecordForBundleUnit:(unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithDatabase:(id)arg0 ;
-(id)unregisterApplicationWithBundleIdentifier:(SEL)arg0 type:(id)arg1 error:(unsigned int)arg2 ;
-(unsigned int)findOrRegisterContainerizedNodeReinitializingContext:(id)arg0 installDictionary:(id)arg1 error:(*id)arg2 ;


@end


#endif