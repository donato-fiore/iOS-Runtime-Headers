// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRUITABLEVIEWSECTION_H
#define HRUITABLEVIEWSECTION_H

@class NSNumber, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HRUITableViewSection : NSObject {
    ? identifier;
    ? headerString;
    ? footerString;
    ? rows;
}


@property (nonatomic, retain) NSNumber *estimatedNumRows; // ivar: estimatedNumRows
@property (nonatomic, copy) NSString *footerString;
@property (nonatomic, copy) NSString *headerString;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *rows;


-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(void)addRow:(id)arg0 ;
-(void)addRowForReuseIdentifier:(id)arg0 ;


@end


#endif