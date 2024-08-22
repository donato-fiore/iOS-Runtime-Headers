// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSSHUTDOWNOPTIONS_H
#define FBSSHUTDOWNOPTIONS_H

@class NSString;
@protocol BSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FBSShutdownOptions : NSObject <BSXPCCoding, NSCopying>



@property (nonatomic) NSInteger LPEMOption; // ivar: _LPEMOption
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isReboot;
@property (readonly, nonatomic) BOOL isShutdown;
@property (readonly, nonatomic) BOOL isUserInitiated;
@property (weak, nonatomic) NSObject<NSCopying> *localContext; // ivar: _localContext
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) NSInteger rebootType; // ivar: _rebootType
@property (nonatomic) NSInteger source; // ivar: _source
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithReason:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif