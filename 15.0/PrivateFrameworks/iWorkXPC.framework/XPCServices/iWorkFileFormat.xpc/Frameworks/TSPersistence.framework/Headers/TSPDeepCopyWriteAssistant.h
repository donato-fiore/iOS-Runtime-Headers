// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDEEPCOPYWRITEASSISTANT_H
#define TSPDEEPCOPYWRITEASSISTANT_H

@class NSString;
@protocol TSPEncoderWriteCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"
#import "TSPDeepCopyObjectMap.h"

@interface TSPDeepCopyWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate>

 {
    TSPObjectContext *_context;
    TSPDeepCopyObjectMap *_objectMap;
    BOOL _resetObjectUUIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)skipMetadataObjectSerialization;
-(NSInteger)componentWriterMode;
-(NSUInteger)objectTargetType;
-(id)createMetadataForRootObject:(id)arg0 readVersion:(NSUInteger)arg1 dataArchiver:(id)arg2 archivedObjects:(id)arg3 componentObjectUUIDMap:(id)arg4 externalReferences:(id)arg5 weakExternalReferences:(id)arg6 lazyReferences:(id)arg7 dataReferences:(id)arg8 error:(*id)arg9 ;
-(id)init;
-(id)initWithContext:(id)arg0 objectMap:(id)arg1 ;
-(void)encodeDeepCopyOfObject:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif