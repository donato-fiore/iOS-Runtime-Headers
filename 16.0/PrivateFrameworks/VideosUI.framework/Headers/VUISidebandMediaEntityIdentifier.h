// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISIDEBANDMEDIAENTITYIDENTIFIER_H
#define VUISIDEBANDMEDIAENTITYIDENTIFIER_H

@class NSString, NSManagedObjectID;
@protocol VUIMediaEntityIdentifierInternal;

#import <Foundation/Foundation.h>

#import "VUIMediaEntityType.h"

@interface VUISidebandMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSManagedObjectID *managedObjectID; // ivar: _managedObjectID
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType; // ivar: _mediaEntityType
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithManagedObjectID:(id)arg0 mediaEntityType:(id)arg1 ;


@end


#endif