// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYMOCKPARTICIPANT_H
#define PXSHAREDLIBRARYMOCKPARTICIPANT_H

@class NSString, NSPersonNameComponents;
@protocol PXSharedLibraryImageProvider, PXSharedLibraryParticipant, PXPerson;

#import <Foundation/Foundation.h>


@interface PXSharedLibraryMockParticipant : NSObject <PXSharedLibraryImageProvider, PXSharedLibraryParticipant>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXSharedLibraryImageProvider> *imageProvider;
@property (nonatomic) BOOL isCurrentUser; // ivar: _isCurrentUser
@property (readonly, copy, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (copy, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (retain, nonatomic) NSObject<PXPerson> *person; // ivar: _person
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


-(NSInteger)requestImageWithTargetSize:(struct CGSize )arg0 displayScale:(CGFloat)arg1 isRTL:(BOOL)arg2 completionHandler:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)cancelRequestWithIdentifier:(NSInteger)arg0 ;


@end


#endif