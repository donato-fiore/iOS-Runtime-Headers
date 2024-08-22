// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOLIBRARYOPTIONS_H
#define PLPHOTOLIBRARYOPTIONS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLPhotoLibraryOptions : NSObject <NSSecureCoding>



@property (nonatomic) BOOL automaticallyMergesContext; // ivar: _automaticallyMergesContext
@property (nonatomic) BOOL automaticallyPinToFirstFetch; // ivar: _automaticallyPinToFirstFetch
@property (nonatomic) NSUInteger libraryInitiator; // ivar: _libraryInitiator
@property (nonatomic) NSUInteger libraryRole; // ivar: _libraryRole
@property (nonatomic) BOOL preventsWaitingForRequiredState; // ivar: _preventsWaitingForRequiredState
@property (nonatomic) BOOL refreshesAfterSave; // ivar: _refreshesAfterSave
@property (nonatomic) NSInteger requiredState; // ivar: _requiredState


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif