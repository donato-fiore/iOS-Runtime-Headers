// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRFRAMEWORKCONTAINERHELPER_H
#define BRFRAMEWORKCONTAINERHELPER_H

@class NSString;
@protocol BRContainerHelper;

#import <Foundation/Foundation.h>


@interface BRFrameworkContainerHelper : NSObject <BRContainerHelper>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canFetchAllContainersByID;
-(id)fetchAllContainersByIDWithError:(*id)arg0 ;
-(id)fetchContainerForMangledID:(id)arg0 personaID:(id)arg1 ;
-(id)itemIDForURL:(id)arg0 error:(*id)arg1 ;
-(id)queryPathsForPersona:(id)arg0 withError:(*id)arg1 ;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg0 toNewParent:(id)arg1 error:(*id)arg2 ;
-(void)_resolveItemIdentifierAtURL:(id)arg0 withHandler:(id)arg1 ;


@end


#endif