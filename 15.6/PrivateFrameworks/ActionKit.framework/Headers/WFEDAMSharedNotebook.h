// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFEDAMSHAREDNOTEBOOK_H
#define WFEDAMSHAREDNOTEBOOK_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFEDAMSharedNotebook : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *notebookGuid; // ivar: _notebookGuid


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif