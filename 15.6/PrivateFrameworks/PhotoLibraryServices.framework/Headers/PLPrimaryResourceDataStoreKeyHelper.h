// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPRIMARYRESOURCEDATASTOREKEYHELPER_H
#define PLPRIMARYRESOURCEDATASTOREKEYHELPER_H


#import <Foundation/Foundation.h>


@interface PLPrimaryResourceDataStoreKeyHelper : NSObject {
    char * originalsBaseData;
    char * rendersBaseData;
    char * derivativesBaseData;
    char * masterThumbsBaseData;
    char * masterThumbFilenameData;
    char * bundleBaseData;
}




-(id)initWithPathManager:(id)arg0 ;
-(void)dealloc;


@end


#endif