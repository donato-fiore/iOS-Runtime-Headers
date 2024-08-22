// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASTHEROIMAGEITEM_H
#define SASTHEROIMAGEITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SADecoratedString.h"
#import "SAUINanoImageResource.h"

@interface SASTHeroImageItem : AceObject <SASTTemplateItem>



@property (retain, nonatomic) SADecoratedString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *position;
@property (readonly) Class superclass;
@property (retain, nonatomic) SAUINanoImageResource *watchImageResource;


+(id)heroImageItem;
+(id)heroImageItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif