// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TESTPLCLOUDSHAREDALBUM_H
#define TESTPLCLOUDSHAREDALBUM_H

@class PLCloudSharedAlbum;



@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum



-(BOOL)cloudOwnerIsWhitelisted;
-(id)cloudGUID;
-(id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg0 allowsEmail:(BOOL)arg1 ;
-(id)cloudOwnerEmail;
-(id)cloudOwnerFirstName;
-(id)cloudOwnerLastName;
-(id)localizedTitle;


@end


#endif