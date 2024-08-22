// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OCPPACKAGEPROPERTIES_H
#define OCPPACKAGEPROPERTIES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OCPPackageProperties : NSObject {
    NSString *mCreator;
    NSString *mDescription;
    NSString *mKeywords;
    NSString *mTitle;
    NSString *mAppVersion;
}


@property (retain) NSString *company; // ivar: mCompany
@property (retain) NSString *subject; // ivar: mSubject


-(?)initWithCoreXmlappXml;
-(?)readFromAppXml;
-(?)readFromCoreXml;
-(?)readFromCoreXmlappXml;
-(id)appVersion;
-(id)creator;
-(id)description;
-(id)keywords;
-(id)title;


@end


#endif