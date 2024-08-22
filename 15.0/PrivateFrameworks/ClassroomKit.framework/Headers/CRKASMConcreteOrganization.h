// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMCONCRETEORGANIZATION_H
#define CRKASMCONCRETEORGANIZATION_H

@class NSUUID, NSString;
@protocol CRKASMOrganization;

#import <Foundation/Foundation.h>


@interface CRKASMConcreteOrganization : NSObject <CRKASMOrganization>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 ;


@end


#endif