// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPPINNEDPLACE_H
#define MSPPINNEDPLACE_H

@class NSUUID, NSString;
@protocol MSPMutableObject, MSPImmutableObject;


#import "MSPPinnedPlaceStorage.h"

@interface MSPPinnedPlace : MSPPinnedPlaceStorage <MSPMutableObject, MSPImmutableObject>

 {
    NSUUID *_storageIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)immutableObjectClass;
+(Class)mutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableObjectProtocol;
+(id)uuidForIdentifier:(id)arg0 ;
-(id)copyIfValidWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 storageIdentifier:(id)arg1 ;
-(id)initWithStorageIdentifier:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)storageIdentifier;
-(id)transferToImmutableIfValidWithError:(*id)arg0 ;


@end


#endif