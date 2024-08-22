// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENWEBCLIP_H
#define ATXHOMESCREENWEBCLIP_H

@class NSString, NSURL;
@protocol ATXHomeScreenLeafIconRepresentable;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenWebClip : NSObject <ATXHomeScreenLeafIconRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXHomeScreenWebClip:(id)arg0 ;
-(id)dictionaryRepresentationForIntrospection;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 name:(id)arg1 url:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif