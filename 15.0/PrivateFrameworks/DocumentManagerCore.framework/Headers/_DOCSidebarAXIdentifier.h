// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DOCSIDEBARAXIDENTIFIER_H
#define _DOCSIDEBARAXIDENTIFIER_H

@class NSString;
@protocol DOCSidebarAXIdentifier;

#import <Foundation/Foundation.h>


@interface _DOCSidebarAXIdentifier : NSObject <DOCSidebarAXIdentifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)containerView;
+(id)headerWithTitle:(id)arg0 ;
+(id)idBase;
+(id)itemWithTitle:(id)arg0 ;


@end


#endif