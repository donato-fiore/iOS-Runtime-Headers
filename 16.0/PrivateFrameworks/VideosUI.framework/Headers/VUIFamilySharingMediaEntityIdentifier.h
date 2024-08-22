// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIFAMILYSHARINGMEDIAENTITYIDENTIFIER_H
#define VUIFAMILYSHARINGMEDIAENTITYIDENTIFIER_H

@class NSString;
@protocol VUIMediaEntityIdentifierInternal;

#import <Foundation/Foundation.h>

#import "VUIMediaEntityType.h"

@interface VUIFamilySharingMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType; // ivar: _mediaEntityType
@property (retain, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithEntityIdentifier:(id)arg0 mediaEntityType:(id)arg1 ;


@end


#endif