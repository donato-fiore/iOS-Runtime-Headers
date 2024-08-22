// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMPMEDIAENTITYIDENTIFIER_H
#define VUIMPMEDIAENTITYIDENTIFIER_H

@class NSString, NSNumber;
@protocol VUIMediaEntityIdentifierInternal;

#import <Foundation/Foundation.h>

#import "VUIMediaEntityType.h"

@interface VUIMPMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType; // ivar: _mediaEntityType
@property (copy, nonatomic) NSNumber *persistentID; // ivar: _persistentID
@property (readonly) Class superclass;


+(id)mediaItemIdentifierWithMediaItem:(id)arg0 ;
+(id)showIdentifierWithMediaItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPersistentID:(id)arg0 mediaEntityType:(id)arg1 ;


@end


#endif