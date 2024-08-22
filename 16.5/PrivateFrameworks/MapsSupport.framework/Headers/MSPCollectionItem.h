// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPCOLLECTIONITEM_H
#define MSPCOLLECTIONITEM_H

@class NSUUID, NSString;
@protocol MSPMutableObject, MSPImmutableObject;

#import <Foundation/Foundation.h>


@interface MSPCollectionItem : NSObject <MSPMutableObject, MSPImmutableObject>

 {
    NSUUID *_storageIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly) Class superclass;


+(Class)immutableObjectClass;
+(Class)mutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableObjectProtocol;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyIfValidWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)storageIdentifier;
-(id)transferToImmutableIfValidWithError:(*id)arg0 ;


@end


#endif