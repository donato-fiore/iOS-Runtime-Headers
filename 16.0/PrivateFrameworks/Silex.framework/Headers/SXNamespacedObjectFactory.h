// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXNAMESPACEDOBJECTFACTORY_H
#define SXNAMESPACEDOBJECTFACTORY_H

@class NSString;
@protocol SXNamespacedObjectFactory;

#import <Foundation/Foundation.h>


@interface SXNamespacedObjectFactory : NSObject <SXNamespacedObjectFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createNamespacedReferenceForComponentStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 ;
-(id)createNamespacedReferenceForComponentTextStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 ;
-(id)createNamespacedReferenceForTextStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 ;
-(void)createNamespacedComponentStylesReferencesForComponent:(id)arg0 DOM:(id)arg1 ;
-(void)createNamespacedComponentTextStylesReferencesForComponent:(id)arg0 DOM:(id)arg1 ;
-(void)createNamespacedTextStylesReferencesForComponent:(id)arg0 DOM:(id)arg1 ;


@end


#endif