// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRWEAKREFERENCE_H
#define CRWEAKREFERENCE_H

@class NSString, NSUUID;
@protocol CRDataType, CRCoding;

#import <Foundation/Foundation.h>

#import "CRDocument.h"

@interface CRWeakReference : NSObject <CRDataType, CRCoding>



@property (readonly, nonatomic) id *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CRDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithContents:(id)arg0 ;
-(id)initWithContents:(id)arg0 document:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 document:(id)arg1 ;
-(id)tombstone;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif