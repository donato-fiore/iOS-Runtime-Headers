// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHTESTFAKEWIDGETICONDESCRIPTOR_H
#define SBHTESTFAKEWIDGETICONDESCRIPTOR_H

@class NSString;
@protocol SBHTestWidgetIconDescriptor;

#import <Foundation/Foundation.h>

#import "SBHCustomIconElement.h"

@interface SBHTestFakeWidgetIconDescriptor : NSObject <SBHTestWidgetIconDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBHCustomIconElement *element; // ivar: _element
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger sizeClass; // ivar: _sizeClass
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sbh_isValidWithError:(*id)arg0 ;
-(NSUInteger)sbh_iconDescriptorType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithElement:(id)arg0 sizeClass:(NSUInteger)arg1 ;


@end


#endif