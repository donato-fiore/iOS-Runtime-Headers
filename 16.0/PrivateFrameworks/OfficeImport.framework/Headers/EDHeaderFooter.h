// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDHEADERFOOTER_H
#define EDHEADERFOOTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EDHeaderFooter : NSObject {
    NSString *mHeaderString;
    NSString *mFooterString;
}




+(id)headerFooter;
-(id)description;
-(id)footerString;
-(id)headerString;
-(void)setFooterString:(id)arg0 ;
-(void)setHeaderString:(id)arg0 ;


@end


#endif