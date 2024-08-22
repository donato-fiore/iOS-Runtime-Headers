// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLISTMEDIAENTITYIDENTIFIER_H
#define VUIPLISTMEDIAENTITYIDENTIFIER_H

@class NSString;
@protocol VUIMediaEntityIdentifierInternal;

#import <Foundation/Foundation.h>

#import "VUIMediaEntityType.h"

@interface VUIPlistMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType; // ivar: _mediaEntityType
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif