// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14FAMILYCIRCLEUI38FAMILYDEPENDENTPASSWORDRESETCONTROLLER_H
#define _TTC14FAMILYCIRCLEUI38FAMILYDEPENDENTPASSWORDRESETCONTROLLER_H

@protocol RemoteUIControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC14FamilyCircleUI38FamilyDependentPasswordResetController : NSObject <RemoteUIControllerDelegate>

 {
    ? parentAltDSID;
    ? dependentAltDSID;
    ? parentAccount;
    ? ruiController;
    ? guardianGSTokenErrorHeader;
    ? guardianGSTokenErrorHeaderValue;
    ? familyDependentPasswordResetApi;
    ? hearbeatTokenKey;
    ? tokens;
    ? serverResourceLoader;
    ? sessionConfiguration;
}




-(id)init;


@end


#endif