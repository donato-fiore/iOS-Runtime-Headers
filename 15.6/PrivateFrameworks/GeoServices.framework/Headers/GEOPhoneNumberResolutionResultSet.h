// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPHONENUMBERRESOLUTIONRESULTSET_H
#define GEOPHONENUMBERRESOLUTIONRESULTSET_H

@class PNRPhoneNumberResolutionResultSet;

#import <Foundation/Foundation.h>


@interface GEOPhoneNumberResolutionResultSet : NSObject {
    PNRPhoneNumberResolutionResultSet *_pnrResultSet;
}




-(id)description;
-(id)initWithPNRResultSet:(id)arg0 ;
-(void)enumerateResolutionsUsingBlock:(id)arg0 ;


@end


#endif