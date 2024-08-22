// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTABLETITLEROW_H
#define MKTABLETITLEROW_H

@class NSString;


#import "MKTableRow.h"

@interface MKTableTitleRow : MKTableRow {
    NSString *_title;
}




-(id)asciiRepresentationUsingColumns:(id)arg0 ;
-(id)csvRepresentation;
-(id)initWithTitle:(id)arg0 ;


@end


#endif