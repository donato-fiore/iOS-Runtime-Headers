// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DOCITEMINFOVIEWAXIDENTIFIER_H
#define _DOCITEMINFOVIEWAXIDENTIFIER_H

@class NSString;
@protocol DOCItemInfoViewAXIdentifier;

#import <Foundation/Foundation.h>


@interface _DOCItemInfoViewAXIdentifier : NSObject <DOCItemInfoViewAXIdentifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)actionsContainer;
+(id)idBase;
+(id)infoContainer;
+(id)levelOfDetailButton;
+(id)metadataRowWithLabel:(id)arg0 ;


@end


#endif