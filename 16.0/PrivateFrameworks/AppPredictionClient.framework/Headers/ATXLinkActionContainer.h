// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLINKACTIONCONTAINER_H
#define ATXLINKACTIONCONTAINER_H

@class LNAction, NSString, LNImage;
@protocol ATXSuggestionExecutableProtocol, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXLinkActionContainer : NSObject <ATXSuggestionExecutableProtocol, ATXProtoBufWrapper>



@property (readonly, nonatomic) LNAction *action; // ivar: _action
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) LNImage *image; // ivar: _image
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXLinkActionContainer:(id)arg0 ;
-(id)_initWithBundleId:(id)arg0 action:(id)arg1 image:(id)arg2 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithBundleId:(id)arg0 action:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif